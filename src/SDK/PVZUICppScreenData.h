///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UICppScreenData.h>

namespace fb {
	class PVZUICppScreenData : public UICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUICppScreenData"); }
		virtual ~PVZUICppScreenData() override {}
		PVZUICppScreenData() {
			m_useHudScaling = false;
		};

		bool m_useHudScaling; // 0x28 (40)
	}; // 0x30 (48)
}

