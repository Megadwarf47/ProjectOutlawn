///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/RichPresenceProperty.h>

namespace fb {
	class RichPresenceContext;
	class RichPresencePresenceString;
}

namespace fb {
	class RichPresenceData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RichPresenceData"); }
		virtual ~RichPresenceData() override {}
		RichPresenceData() {
		};

		RefArray<RichPresencePresenceString> m_presenceModes; // 0x18 (24)
		CtrRef<RichPresencePresenceString> m_defaultMode; // 0x20 (32)
		CtrRef<RichPresencePresenceString> m_inactiveMode; // 0x28 (40)
		CtrRef<RichPresencePresenceString> m_menusMode; // 0x30 (48)
		RefArray<RichPresenceContext> m_contexts; // 0x38 (56)
		Array<RichPresenceProperty> m_properties; // 0x40 (64)
	}; // 0x48 (72)
}

