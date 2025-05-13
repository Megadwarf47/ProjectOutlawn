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
	class ScalableEmitterDocument : public EmitterDocument {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScalableEmitterDocument"); }
		virtual ~ScalableEmitterDocument() override {}
		ScalableEmitterDocument() {
		};

		CtrRef<EmitterTemplateData> m_templateDataLow; // 0x18 (24)
		CtrRef<EmitterTemplateData> m_templateDataMedium; // 0x20 (32)
		CtrRef<EmitterTemplateData> m_templateDataHigh; // 0x28 (40)
		CtrRef<EmitterTemplateData> m_templateDataUltra; // 0x30 (48)
	}; // 0x38 (56)
}

