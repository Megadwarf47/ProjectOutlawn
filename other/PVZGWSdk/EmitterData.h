///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/RefArray.h>

namespace fb {
	class EmitterDocument;
}

namespace fb {
	class EmitterData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterData"); }
		virtual ~EmitterData() override {}
		EmitterData() {
		};

		RefArray<EmitterDocument> m_emitterAssets; // 0x28 (40)
	}; // 0x30 (48)
}

