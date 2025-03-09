///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIElementButtonBarButtonEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementTrigger;
}

namespace fb {
	class BFUIElementButtonBarPressAndReleaseButtonEntityData : public BFUIElementButtonBarButtonEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElementButtonBarPressAndReleaseButtonEntityData"); }
		virtual ~BFUIElementButtonBarPressAndReleaseButtonEntityData() override {}
		BFUIElementButtonBarPressAndReleaseButtonEntityData() {
		};

		CtrRef<UIElementTrigger> m_actionRelease; // 0xF0 (240)
	}; // 0x100 (256)
}

