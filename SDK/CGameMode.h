#pragma once

#include "CEntity.h"

class C_GameMode {
public:
	void attack(C_Entity* entity) {
		using attack = void(__fastcall*)(void*, void*);
		static attack attackFunc = reinterpret_cast<attack>(Utils::FindSignature("48 8B C4 55 48 8D 68 ?? 48 81 EC ?? ?? ?? ?? 48 C7 45 ?? FE FF FF FF 48 89 58 ?? 48 89 70 ?? 48 89 78 ?? 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 45 ?? 48 8B FA 48 8B F1 48 C7 45 ?? 00 00 00 00 B9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B D8 48 89 45 ?? 33 D2 41 B8 ?? ?? ?? ?? 48 8B C8 E8 ?? ?? ?? ?? 48 8B CB E8 ?? ?? ?? ?? 90 48 89 45 ?? C6"));

		if (attackFunc != 0x0)
			attackFunc(this,  entity);
	}

};