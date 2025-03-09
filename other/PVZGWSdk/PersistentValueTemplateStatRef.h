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
	class PersistentValueTemplate;
}

namespace fb {
	class PersistentValueTemplateStatRef : public AbstractPersistentStatRef {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistentValueTemplateStatRef"); }
		virtual ~PersistentValueTemplateStatRef() override {}
		PersistentValueTemplateStatRef() {
		};

		CtrRef<PersistentValueTemplate> m_definition; // 0x10 (16)
	}; // 0x18 (24)
}

