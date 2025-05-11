///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIComponentData.h>
#include <fb/UIStreamInstallGroup.h>

namespace fb {
	class FrontEndComponentData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FrontEndComponentData"); }
		virtual ~FrontEndComponentData() override {}
		FrontEndComponentData() {
		};

		Array<UIStreamInstallGroup> m_groups; // 0x30 (48)
	}; // 0x38 (56)
}

