///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/UILevelLoadGameModeData.h>

namespace fb {
	class UILevelLoadData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UILevelLoadData"); }
		virtual ~UILevelLoadData() override {}
		UILevelLoadData() {
			m_hasLoadingMovie = false;
		};

		Guid m_loadingMovieGuid; // 0x10 (16)
		String m_screenDataPath; // 0x20 (32)
		String m_widgetDataPath; // 0x28 (40)
		Array<UILevelLoadGameModeData> m_gameModeData; // 0x30 (48)
		bool m_hasLoadingMovie; // 0x38 (56)
	}; // 0x40 (64)
}

