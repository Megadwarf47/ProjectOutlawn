///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class AbstractPersistenceData;
}

namespace fb {
	class PersistenceStatTable : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceStatTable"); }
		virtual ~PersistenceStatTable() override {}
		PersistenceStatTable() {
		};

		String m_tableName; // 0x10 (16)
		CtrRef<AbstractPersistenceData> m_ownerPersistenceData; // 0x18 (24)
	}; // 0x20 (32)
}

