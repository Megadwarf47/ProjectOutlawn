///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFServerConfigurationSchedule.h>
#include <fb/DataContainer.h>

namespace fb {
	class BFServerConfiguration : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFServerConfiguration"); }
		virtual ~BFServerConfiguration() override {}
		BFServerConfiguration() {
		};

		Array<BFServerConfigurationSchedule> m_schedules; // 0x10 (16)
	}; // 0x18 (24)
}

