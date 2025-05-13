///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class DriverSettings;
}

namespace fb {
	class DriverComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DriverComponentData"); }
		virtual ~DriverComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		DriverComponentData() {
			m_wantedSpeed = 20.f;
		};

		float m_wantedSpeed; // 0x70 (112)
		CtrRef<DriverSettings> m_settings; // 0x78 (120)
	}; // 0x80 (128)
}

