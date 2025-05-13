///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	class UIMainMenuFriendsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMainMenuFriendsWidgetData"); }
		virtual ~UIMainMenuFriendsWidgetData() override {}
		UIMainMenuFriendsWidgetData() {
			m_friendRowSpacing = 1;
		};

		CtrRef<UIWidgetBlueprint> m_rowTemplate; // 0x68 (104)
		s32 m_friendRowSpacing; // 0x70 (112)
	}; // 0x78 (120)
}

