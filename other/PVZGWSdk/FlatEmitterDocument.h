///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EmitterDocument.h>

namespace fb {
	class EmitterTemplateData;
}

namespace fb {
	class FlatEmitterDocument : public EmitterDocument {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FlatEmitterDocument"); }
		virtual ~FlatEmitterDocument() override {}
		FlatEmitterDocument() {
		};

		CtrRef<EmitterTemplateData> m_templateData; // 0x18 (24)
	}; // 0x20 (32)
}

