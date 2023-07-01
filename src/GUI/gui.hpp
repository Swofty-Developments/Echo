#pragma once
#include "../Hack/opcode.hpp"
#include <imgui.h>
#include "keybinds.h"

class GUI {
public:

	static auto& get() {
		static GUI instance;
		return instance;
	}

	bool show_window = false;

	void draw();

	void main();

	void tools();

	void editor();

	void init();

	void renderer();

	void sequential_replay();

	void ui_editor();

	void clickbot();

	void show_keybind_prompt(const std::string& buttonName);

	void import_theme(std::string path);

	void export_theme(std::string path, bool custom_path = false);

	bool show_reset_popup = false;

	float input_fps = 60.f;

	int offset_frames = 0;

	float scheduler_dt = 60.f;

	char theme_name[1000] = "My Theme";

	bool docked = false;

	bool change_display_fps = false; // so it doesnt change when ur typing lol

	bool editor_auto_scroll = true;

	std::string keybind_prompt = "";
	std::string keybind_prompt_cache = "";
	ImVec4 popup_bg_color = { 0, 0, 0, 60 };

	ImVec4 player_1_button_color = { 0.18, 0.89, 0.7, 0.54 };
	ImVec4 player_2_button_color = { 0.18, 0.89, 0.46, 0.54 };

	ImVec2 main_pos;
	ImVec2 tools_pos;
	ImVec2 editor_pos;
	ImVec2 render_pos;
	ImVec2 sequence_pos;
	ImVec2 style_pos;
	ImVec2 clickbot_pos;
};