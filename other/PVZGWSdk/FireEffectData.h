///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	struct FireEffectData {
		FireEffectData() {
			m_useZoomOffset = false;
			m_useZoomRotation = false;
			m_disableDuringZoom = false;
			m_updateTransform = false;
			m_stopLoopingEffects = false;
		};

		Vec3 m_offset; // 0x0 (0)
		Vec3 m_rotation; // 0x10 (16)
		Vec3 m_zoomOffset; // 0x20 (32)
		Vec3 m_zoomRotation; // 0x30 (48)
		CtrRef<EffectBlueprint> m_effect; // 0x40 (64)
		CtrRef<EffectBlueprint> m_chargingEffect; // 0x48 (72)
		RefArray<EffectBlueprint> m_chargeEffects; // 0x50 (80)
		bool m_useZoomOffset; // 0x58 (88)
		bool m_useZoomRotation; // 0x59 (89)
		bool m_disableDuringZoom; // 0x5A (90)
		bool m_updateTransform; // 0x5B (91)
		bool m_stopLoopingEffects; // 0x5C (92)
	}; // 0x60 (96)
}

