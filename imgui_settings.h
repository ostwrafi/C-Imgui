#include "imgui.h"

inline ImVec2 center_text(ImVec2 min, ImVec2 max, const char* text)
{
	return min + (max - min) / 2 - ImGui::CalcTextSize(text) / 2;
}
namespace c
{
	inline ImVec4 accent_color = ImColor(255, 0, 0, 255);
	inline ImVec4 particle_color = ImColor(255, 0, 0, 255);
	inline ImVec4 ojo = ImColor(255, 0, 0, 255);

	//maudo
	inline ImVec4 logo_color = ImColor(255, 255, 255);


	inline ImVec4 accent_low_color = ImColor(255, 0, 0,255/2);
	inline ImVec4 accent_low = ImColor(255, 0, 0, 255 / 2); //1

	inline ImVec4 accent_text_color = ImColor(245, 245, 255); //2

	inline ImVec4 accent_text_low_color = ImColor(245, 245, 255, 255 / 2);

	inline ImVec4 notify = ImColor(43, 48, 54);
	inline ImVec4 general_color = ImColor(50, 191, 255, 255); //3

	namespace bg
	{
		inline ImVec4 background = ImColor(14, 14, 15, 240);
		inline ImVec4 outline_background = ImColor(21,22,23, 255);
		inline ImVec2 size = ImVec2(750, 640);
		inline float rounding = 12;
	}

	namespace child
	{
		inline ImVec4 background = ImColor(22, 23, 26, 245);
		inline ImVec4 outline_background = ImColor(27, 29, 32, 255);
		inline float rounding = 6;
		inline ImVec4 outline = ImColor(18, 20, 18, 255);
	}

	namespace checkbox
	{
		inline ImVec4 circle_inactive = ImColor(43, 48, 54, 255);

		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 30;
	}

	namespace slider
	{
		inline ImVec4 circle_inactive = ImColor(43, 48, 54, 255);

		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 30;
	}

	namespace combo
	{
		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(255, 0, 0, 255);
		inline float rounding = 3;
	}

	namespace picker
	{
		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 2;
	}

	namespace button
	{
		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 4;
	}

	namespace input
	{
		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 4;
	}

	namespace keybind
	{
		inline ImVec4 background = ImColor(27, 29, 32, 255);
		inline ImVec4 outline_background = ImColor(30, 32, 36, 255);
		inline float rounding = 3;
	}


	namespace text
	{
		inline ImVec4 text_hov = ImColor(245, 245, 255);
		inline ImVec4 text = ImColor(255, 255, 255);
		inline ImVec4 text2 = ImColor(145, 145, 255,0);
		inline ImVec4 hide_text = ImColor(43, 48, 54, 255);
		inline ImVec4 text_active = ImColor(255, 255, 255, 255);

	}
}