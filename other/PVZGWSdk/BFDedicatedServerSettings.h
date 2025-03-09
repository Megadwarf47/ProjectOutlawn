///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SystemSettings.h>

namespace fb {
	class PersistenceConfiguration;
}

namespace fb {
	class BFDedicatedServerSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFDedicatedServerSettings"); }
		virtual ~BFDedicatedServerSettings() override {}
		BFDedicatedServerSettings() {
		};

		CtrRef<PersistenceConfiguration> m_persistenceConfig; // 0x20 (32)
	}; // 0x28 (40)
}

