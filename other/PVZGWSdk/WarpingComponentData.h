///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/String.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class WarpingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WarpingComponentData"); }
		virtual ~WarpingComponentData() override {}
		WarpingComponentData() {
			m_warpDistance = 3.75f;
			m_numberOfSubWarps = 4;
			m_subWarpDelay = 0.33f;
			m_numberOfWarps = 2;
			m_warpDelay = 2.f;
			m_warpingReloadTime = 20.f;
			m_warpInput = -1341426433;
		};

		CtrRef<EffectBlueprint> m_warpEffect; // 0x70 (112)
		float m_warpDistance; // 0x78 (120)
		s32 m_numberOfSubWarps; // 0x7C (124)
		float m_subWarpDelay; // 0x80 (128)
		s32 m_numberOfWarps; // 0x84 (132)
		float m_warpDelay; // 0x88 (136)
		float m_warpingReloadTime; // 0x8C (140)
		Array<s32> m_excludedInputActionsWhileWarping; // 0x90 (144)
		String m_warpingIcon; // 0x98 (152)
		s32 m_warpInput; // 0xA0 (160)
	}; // 0xB0 (176)
}

