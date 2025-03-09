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

namespace fb {
	class UIEventAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIEventAsset"); }
		virtual ~UIEventAsset() override {}
		UIEventAsset() {
		};

		String m_category; // 0x18 (24)
		Array<String> m_eventList; // 0x20 (32)
	}; // 0x28 (40)
}

