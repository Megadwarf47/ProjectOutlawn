///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/XdpStatCodeData.h>

namespace fb {
	class XdpExportAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("XdpExportAsset"); }
		virtual ~XdpExportAsset() override {}
		XdpExportAsset() {
			m_perLevelProgression = 0.f;
		};

		float m_perLevelProgression; // 0x18 (24)
		Array<String> m_exportedAchievements; // 0x20 (32)
		Array<XdpStatCodeData> m_exportedStats; // 0x28 (40)
	}; // 0x30 (48)
}

