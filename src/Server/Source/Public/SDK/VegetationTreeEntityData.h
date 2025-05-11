///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Vec3.h>
#include <fb/VegetationBaseEntityData.h>
#include <fb/VegetationEffectSlot.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class VegetationTreeEntityData : public VegetationBaseEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VegetationTreeEntityData"); }
		virtual ~VegetationTreeEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		virtual bool getIsEntityOwner() const override { return true; }
		VegetationTreeEntityData() {
			m_inertiaModifier = Vec3(1.f, 1.f, 1.f);
			m_translucencyVolumeCenter = Vec3(0.f, 10.f, 0.f);
			m_stiffness = 200.f;
			m_damping = 100.f;
			m_stemMass = 40.f;
			m_stiffnessSpread = 1.f;
			m_dampingSpread = 1.f;
			m_massSpread = 1.f;
			m_stemLockedUpTo = 0.f;
			m_stemBoneCount = 1;
			m_breakableJointThreshold = 0.45f;
			m_boundingBoxScaleFactor = 1.3f;
			m_partsTimeToLive = 10000.f;
			m_linearVelocityDamping = 1.f;
			m_angularVelocityDamping = 1.f;
			m_friction = 15.f;
			m_restitution = 0.6f;
			m_stemPhysicsWidth = 0.2f;
			m_stemPhysicsHeightScale = 1.f;
			m_branchPhysicsWidth = 0.1f;
			m_branchPhysicsHeightScale = 1.f;
			m_destructionMassScale = 1.f;
			m_centerOfMassVerticalScale = 0.5f;
			m_minRespawnTime = 1.f;
			m_stemEffectNodeThreshold = 1000;
			m_shadowLODOffset = 4;
			m_coliPlaneDepth = 0.f;
			m_stemHitpoints = 100.f;
			m_branchHitpoints = 50.f;
			m_branchL2Hitpoints = 20.f;
			m_stemStiffness = 1.f;
			m_stemStiffnessSpread = 0.5f;
			m_stemStiffnessInherit = 1.f;
			m_branchStiffness = 1.f;
			m_branchStiffnessInherit = 1.f;
			m_branchStiffnessL2 = 1.f;
			m_branchStiffnessL2Inherit = 1.f;
			m_windStem = 0.8f;
			m_windBranch = 2.f;
			m_windBranchL2 = 3.5f;
			m_windEndPoints = 1.f;
			m_inheritParentEndPoints = 0.f;
			m_impactThreshold = 50.f;
			m_collisionImpactMultiplier = 1.f;
			m_windMicroVariationMultiplier = 0.f;
			m_windEPMicroVariationMultiplier = 1.f;
			m_fallDirectionStart = 0.f;
			m_fallDirectionEnd = 360.f;
			m_constantFalloff = false;
			m_indestructable = false;
			m_translucencyEnabled = true;
			m_clientSideOnly = false;
			m_usePhysicsShapes = false;
			m_constraintStemB1 = false;
			m_constraintStemB2 = false;
			m_forceFullSim = false;
			m_useImpactThreshold = false;
		};

		Vec3 m_inertiaModifier; // 0xE0 (224)
		Vec3 m_translucencyVolumeCenter; // 0xF0 (240)
		float m_stiffness; // 0x100 (256)
		float m_damping; // 0x104 (260)
		float m_stemMass; // 0x108 (264)
		float m_stiffnessSpread; // 0x10C (268)
		float m_dampingSpread; // 0x110 (272)
		float m_massSpread; // 0x114 (276)
		float m_stemLockedUpTo; // 0x118 (280)
		s32 m_stemBoneCount; // 0x11C (284)
		float m_breakableJointThreshold; // 0x120 (288)
		float m_boundingBoxScaleFactor; // 0x124 (292)
		float m_partsTimeToLive; // 0x128 (296)
		float m_linearVelocityDamping; // 0x12C (300)
		float m_angularVelocityDamping; // 0x130 (304)
		float m_friction; // 0x134 (308)
		float m_restitution; // 0x138 (312)
		float m_stemPhysicsWidth; // 0x13C (316)
		float m_stemPhysicsHeightScale; // 0x140 (320)
		float m_branchPhysicsWidth; // 0x144 (324)
		float m_branchPhysicsHeightScale; // 0x148 (328)
		float m_destructionMassScale; // 0x14C (332)
		float m_centerOfMassVerticalScale; // 0x150 (336)
		VegetationEffectSlot m_stemBreakEffect; // 0x158 (344)
		VegetationEffectSlot m_branchBreakEffect; // 0x170 (368)
		VegetationEffectSlot m_impactEffect; // 0x188 (392)
		CtrRef<EffectBlueprint> m_windEffect; // 0x1A0 (416)
		float m_minRespawnTime; // 0x1A8 (424)
		u32 m_stemEffectNodeThreshold; // 0x1AC (428)
		u32 m_shadowLODOffset; // 0x1B0 (432)
		float m_coliPlaneDepth; // 0x1B4 (436)
		float m_stemHitpoints; // 0x1B8 (440)
		float m_branchHitpoints; // 0x1BC (444)
		float m_branchL2Hitpoints; // 0x1C0 (448)
		float m_stemStiffness; // 0x1C4 (452)
		float m_stemStiffnessSpread; // 0x1C8 (456)
		float m_stemStiffnessInherit; // 0x1CC (460)
		float m_branchStiffness; // 0x1D0 (464)
		float m_branchStiffnessInherit; // 0x1D4 (468)
		float m_branchStiffnessL2; // 0x1D8 (472)
		float m_branchStiffnessL2Inherit; // 0x1DC (476)
		CtrRef<EffectBlueprint> m_bulletImpactEffect; // 0x1E0 (480)
		CtrRef<EffectBlueprint> m_collisionEffect; // 0x1E8 (488)
		CtrRef<EffectBlueprint> m_splashNearEffect; // 0x1F0 (496)
		CtrRef<EffectBlueprint> m_splashDistantEffect; // 0x1F8 (504)
		CtrRef<EffectBlueprint> m_localWindEffect; // 0x200 (512)
		CtrRef<EffectBlueprint> m_stemRipEffect; // 0x208 (520)
		CtrRef<EffectBlueprint> m_treeFallEffect; // 0x210 (528)
		CtrRef<EffectBlueprint> m_groundImpactEffect; // 0x218 (536)
		float m_windStem; // 0x220 (544)
		float m_windBranch; // 0x224 (548)
		float m_windBranchL2; // 0x228 (552)
		float m_windEndPoints; // 0x22C (556)
		float m_inheritParentEndPoints; // 0x230 (560)
		float m_impactThreshold; // 0x234 (564)
		float m_collisionImpactMultiplier; // 0x238 (568)
		float m_windMicroVariationMultiplier; // 0x23C (572)
		float m_windEPMicroVariationMultiplier; // 0x240 (576)
		float m_fallDirectionStart; // 0x244 (580)
		float m_fallDirectionEnd; // 0x248 (584)
		bool m_constantFalloff; // 0x24C (588)
		bool m_indestructable; // 0x24D (589)
		bool m_translucencyEnabled; // 0x24E (590)
		bool m_clientSideOnly; // 0x24F (591)
		bool m_usePhysicsShapes; // 0x250 (592)
		bool m_constraintStemB1; // 0x251 (593)
		bool m_constraintStemB2; // 0x252 (594)
		bool m_forceFullSim; // 0x253 (595)
		bool m_useImpactThreshold; // 0x254 (596)
	}; // 0x260 (608)
}

