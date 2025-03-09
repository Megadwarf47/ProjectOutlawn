///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIItemDescription.h>

namespace fb {
	class UIRankDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIRankDescription"); }
		virtual ~UIRankDescription() override {}
		UIRankDescription() {
			m_ignoreBuild = true;
		};

	}; // 0x28 (40)
}

