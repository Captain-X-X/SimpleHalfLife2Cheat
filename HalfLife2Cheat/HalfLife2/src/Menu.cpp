#include "pch.h"
#include "Menu.h"
#include "Hacks.h"
namespace Menuc
{
	void RenderImGuiMenu(bool& bOpen)
	{
		ImGui::Begin("Simple HL2", &bOpen);
		if (ImGui::BeginTabBar("tabbar1"))
		{
			if (ImGui::BeginTabItem("Local Player"))
			{
				ImGui::Checkbox("God Mode", &Hacks::bHealth);
				ImGui::Checkbox("Unlimited Ammo", &Hacks::bAmmo);
				if (ImGui::Button("Give Ammo!"))
				{
					Hacks::GiveAmmo(9999);
				}
				if (ImGui::Button("Give Health!"))
				{
					Hacks::GiveHealth(9999);
				}

				if (ImGui::Button("Move Up +10"))
				{
					Hacks::sLocalPlayer->positionWrite.z + 10.0f;
				}
				if (ImGui::Button("Move Down +10"))
				{
					Hacks::sLocalPlayer->positionWrite.z - 10.0f;
				}
				std::string txt = "Position: %f, %f, %f";
				ImGui::Text(txt.c_str(), Hacks::sLocalPlayer->positionWrite.x, Hacks::sLocalPlayer->positionWrite.y, Hacks::sLocalPlayer->positionWrite.z);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Misc"))
			{
				if (ImGui::Button("Initilize Memory"))
				{
					// initilize our cheat stuffz
					Hacks::Initilize();
				}
				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
		ImGui::End();
	}

	void SaveCfg()
	{

	}
	void LoadCfg()
	{

	}
}