///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CrosshairTypeAsset.h>
#include <fb/String.h>

namespace fb {
	class BFCrosshairTypeAsset : public CrosshairTypeAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFCrosshairTypeAsset"); }
		virtual ~BFCrosshairTypeAsset() override {}
		BFCrosshairTypeAsset() {
			m_zoomInFadeTime = 0.2f;
			m_zoomOutFadeTime = 0.1f;
			m_hideOnZoom = false;
			m_showInHardcore = false;
		};

		String m_crosshairTypeId; // 0x18 (24)
		float m_zoomInFadeTime; // 0x20 (32)
		float m_zoomOutFadeTime; // 0x24 (36)
		bool m_hideOnZoom; // 0x28 (40)
		bool m_showInHardcore; // 0x29 (41)
	}; // 0x30 (48)
}

