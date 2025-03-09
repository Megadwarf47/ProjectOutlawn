///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class SpectatorViewComponentData;
}

namespace fb {
	class SpectatorViewData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpectatorViewData"); }
		virtual ~SpectatorViewData() override {}
		SpectatorViewData() {
			m_priority = 1;
			m_viewIndex = 0;
			m_allowSpectatorCameraInput = false;
		};

		s32 m_priority; // 0x18 (24)
		s32 m_viewIndex; // 0x1C (28)
		RefArray<SpectatorViewComponentData> m_viewComponents; // 0x20 (32)
		bool m_allowSpectatorCameraInput; // 0x28 (40)
	}; // 0x30 (48)
}

