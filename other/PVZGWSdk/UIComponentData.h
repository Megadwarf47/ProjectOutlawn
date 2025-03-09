///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/String.h>
#include <fb/UIUpdateType.h>

namespace fb {
	class UIComponentData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIComponentData"); }
		virtual ~UIComponentData() override {}
		UIComponentData() {
			m_updatesPerSecond = 30;
			m_updateType = UIUpdateType::UIUpdateType_Always;
		};

		String m_shortName; // 0x18 (24)
		Array<String> m_dataSources; // 0x20 (32)
		s32 m_updatesPerSecond; // 0x28 (40)
		UIUpdateType m_updateType; // 0x2C (44)
	}; // 0x30 (48)
}

