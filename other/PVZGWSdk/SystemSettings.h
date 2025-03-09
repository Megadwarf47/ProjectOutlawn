///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/GamePlatform.h>
#include <fb/String.h>

namespace fb {
	class SystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SystemSettings"); }
		virtual ~SystemSettings() override {}
		SystemSettings() {
			m_platform = GamePlatform::GamePlatform_Any;
		};

		String m_name; // 0x10 (16)
		GamePlatform m_platform; // 0x18 (24)
	}; // 0x20 (32)
}

