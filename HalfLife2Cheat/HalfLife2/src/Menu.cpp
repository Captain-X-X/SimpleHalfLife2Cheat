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