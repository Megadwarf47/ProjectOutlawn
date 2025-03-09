///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>

namespace fb {
	class UIActionData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIActionData"); }
		virtual ~UIActionData() override {}
		UIActionData() {
		};

		Array<String> m_actionKeys; // 0x18 (24)
	}; // 0x20 (32)
}

