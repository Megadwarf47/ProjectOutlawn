///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractPersistentStatRef.h>
#include <fb/CtrRef.h>

namespace fb {
	class AwardData;
}

namespace fb {
	class PersistentAwardDataStatRef : public AbstractPersistentStatRef {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistentAwardDataStatRef"); }
		virtual ~PersistentAwardDataStatRef() override {}
		PersistentAwardDataStatRef() {
		};

		CtrRef<AwardData> m_definition; // 0x10 (16)
	}; // 0x18 (24)
}

