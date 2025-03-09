///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class AbstractPersistenceData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AbstractPersistenceData"); }
		virtual ~AbstractPersistenceData() override {}
		AbstractPersistenceData() {
		};

	}; // 0x18 (24)
}

