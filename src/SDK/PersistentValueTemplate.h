///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/PersistentValueTemplateData.h>
#include <fb/RefArray.h>

namespace fb {
	class AbstractPersistentStatRef;
}

namespace fb {
	class PersistentValueTemplate : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistentValueTemplate"); }
		virtual ~PersistentValueTemplate() override {}
		PersistentValueTemplate() {
		};

		PersistentValueTemplateData m_data; // 0x10 (16)
		RefArray<AbstractPersistentStatRef> m_derivedFormulaRefs; // 0x38 (56)
	}; // 0x40 (64)
}

