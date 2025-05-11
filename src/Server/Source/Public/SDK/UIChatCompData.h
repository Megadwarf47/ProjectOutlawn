///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIComponentData.h>

namespace fb {
	class ChatSettings;
}

namespace fb {
	class UIChatCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIChatCompData"); }
		virtual ~UIChatCompData() override {}
		UIChatCompData() {
		};

		CtrRef<ChatSettings> m_settings; // 0x30 (48)
	}; // 0x38 (56)
}

