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
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Misc"))
			{
				ImGui::SeparatorText("Game");
				if (ImGui::Button("Initilize Memory"))
				{
					Hacks::Initilize();
				}
				ImGui::EndTabItem();
			}
			ImGui::EndTabBar();
		}
		ImGui::End();
	}
}