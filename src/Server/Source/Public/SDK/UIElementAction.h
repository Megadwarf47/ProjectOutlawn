///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/UIElementTrigger.h>

namespace fb {
	class Asset;
}

namespace fb {
	class UIElementAction : public UIElementTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementAction"); }
		virtual ~UIElementAction() override {}
		UIElementAction() {
			m_key = 0;
		};

		s32 m_key; // 0x10 (16)
		Array<String> m_params; // 0x18 (24)
		CtrRef<Asset> m_actionAsset; // 0x20 (32)
	}; // 0x28 (40)
}

