///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class SurfaceOrientTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SurfaceOrientTune"); }
		virtual ~SurfaceOrientTune() override {}
		SurfaceOrientTune() {
			m_surfaceOrientThreshold = 60.f;
			m_surfaceOrientSlerpTime = 0.5f;
			m_alwaysVerticalOnAutoGen = true;
		};

		float m_surfaceOrientThreshold; // 0x18 (24)
		float m_surfaceOrientSlerpTime; // 0x1C (28)
		bool m_alwaysVerticalOnAutoGen; // 0x20 (32)
	}; // 0x28 (40)
}

