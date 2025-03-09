///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIItemDescription.h>

namespace fb {
	class UIDogTagDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDogTagDescription"); }
		virtual ~UIDogTagDescription() override {}
		UIDogTagDescription() {
			m_ignoreBuild = true;
		};

	}; // 0x28 (40)
}

