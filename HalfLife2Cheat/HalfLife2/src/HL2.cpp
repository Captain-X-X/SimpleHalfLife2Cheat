#include "pch.h"
#include "HL2.h"

namespace HL2SE
{
    ServerLocalEnt* getServerPlayer()
    {
        return *(ServerLocalEnt**)(ServerDLL + ServerPlayerAddy);
    }

    bool worldToScreen(Vector3 position, Vector2& screen, float vMatrix[16], int wWidth, int wHeight)
    {
        // i did not make this function, copied from youtube by a someone a lot smarter than I // https://youtu.be/jnUZT2gWWuE?si=T4idoaBny5VK8f1N
        Vector4 clipCoords;
        clipCoords.x = position.x * vMatrix[0] + position.y * vMatrix[1] + position.z * vMatrix[2] + vMatrix[3];
        clipCoords.y = position.x * vMatrix[4] + position.y * vMatrix[5] + position.z * vMatrix[6] + vMatrix[7];
        clipCoords.z = position.x * vMatrix[8] + position.y * vMatrix[9] + position.z * vMatrix[10] + vMatrix[11];
        clipCoords.w = position.x * vMatrix[12] + position.y * vMatrix[13] + position.z * vMatrix[14] + vMatrix[15];

        if (clipCoords.w < 0.1f)
            return false;

        Vector3 NDC;
        NDC.x = clipCoords.x / clipCoords.w;
        NDC.y = clipCoords.y / clipCoords.w;
        NDC.z = clipCoords.z / clipCoords.w;

        screen.x = (wWidth / 2 * NDC.x) + (NDC.x + wWidth / 2);
        screen.y = -(wHeight / 2 * NDC.y) + (NDC.y + wHeight / 2);
        return true;
    }
}