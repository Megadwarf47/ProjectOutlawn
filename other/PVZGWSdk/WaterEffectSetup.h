///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/WaterAmbientFoamEffectSpawner.h>

namespace fb {
	class WaterEffectSetup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterEffectSetup"); }
		virtual ~WaterEffectSetup() override {}
		WaterEffectSetup() {
		};

		Array<WaterAmbientFoamEffectSpawner> m_ambientEffects; // 0x18 (24)
	}; // 0x20 (32)
}

