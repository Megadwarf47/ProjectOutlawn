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
#include <fb/LinkConnection.h>
#include <fb/PropertyConnection.h>

namespace fb {
	class DynamicDataContainer;
}

namespace fb {
	class DataBusData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataBusData"); }
		virtual ~DataBusData() override {}
		DataBusData() {
			m_flags = 0;
		};

		Array<PropertyConnection> m_propertyConnections; // 0x18 (24)
		Array<LinkConnection> m_linkConnections; // 0x20 (32)
		CtrRef<DynamicDataContainer> m_interface; // 0x28 (40)
		u16 m_flags; // 0x30 (48)
	}; // 0x38 (56)
}

