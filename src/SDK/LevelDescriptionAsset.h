///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/LevelBundleLoad.h>
#include <fb/LevelDescription.h>
#include <fb/LevelDescriptionInclusionCategory.h>
#include <fb/LevelStartPoint.h>
#include <fb/String.h>

namespace fb {
	class LevelDescriptionAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LevelDescriptionAsset"); }
		virtual ~LevelDescriptionAsset() override {}
		LevelDescriptionAsset() {
		};

		String m_levelName; // 0x18 (24)
		Array<LevelDescriptionInclusionCategory> m_categories; // 0x20 (32)
		LevelDescription m_description; // 0x28 (40)
		Array<LevelBundleLoad> m_bundles; // 0x48 (72)
		Array<LevelStartPoint> m_startPoints; // 0x50 (80)
		Array<String> m_superBundles; // 0x58 (88)
		Guid m_levelGuid; // 0x60 (96)
	}; // 0x70 (112)
}

