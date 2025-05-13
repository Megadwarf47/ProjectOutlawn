///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>

namespace fb {
	class UIItemDescription : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIItemDescription"); }
		virtual ~UIItemDescription() override {}
		UIItemDescription() {
			m_ignoreBuild = false;
		};

		Array<u32> m_itemIds; // 0x10 (16)
		Array<u32> m_hiddenInProgressionIds; // 0x18 (24)
		bool m_ignoreBuild; // 0x20 (32)
	}; // 0x28 (40)
}

