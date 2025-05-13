///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LevelDescriptionComponent.h>
#include <fb/RichPresenceContextSetting.h>

namespace fb {
	class RichPresencePresenceString;
}

namespace fb {
	class OnlineRichPresenceLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OnlineRichPresenceLevelDescriptionComponent"); }
		virtual ~OnlineRichPresenceLevelDescriptionComponent() override {}
		OnlineRichPresenceLevelDescriptionComponent() {
		};

		CtrRef<RichPresencePresenceString> m_presenceMode; // 0x10 (16)
		Array<RichPresenceContextSetting> m_contextValues; // 0x18 (24)
	}; // 0x20 (32)
}

