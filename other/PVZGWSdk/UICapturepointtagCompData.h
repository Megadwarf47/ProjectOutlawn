///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UI3dIconCompData.h>
#include <fb/UITargetCharacterIcon.h>

namespace fb {
	class UICapturepointtagCompData : public UI3dIconCompData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICapturepointtagCompData"); }
		virtual ~UICapturepointtagCompData() override {}
		UICapturepointtagCompData() {
		};

		Array<UITargetCharacterIcon> m_targetIcons; // 0xB8 (184)
	}; // 0xC0 (192)
}

