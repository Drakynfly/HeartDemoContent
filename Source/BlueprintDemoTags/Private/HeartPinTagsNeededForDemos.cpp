// Copyright Guy (Drakynfly) Lundvall. All Rights Reserved.

#include "NativeGameplayTags.h"

/**
 * This file defines Pin Tags used by the Example Graphs of the Demo.
 * It is not required to define tags in c++ like this! You can also create new tags by using the wizard in Project Settings,
 * or by manually editing an .ini file that defines gameplay tags.
 * I just prefer to do it this way :)
 *
 * See here for more info if you are new to gameplay tags:
 *   https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Tags/
 *                                 ^^ link says 4.27 but this is still accurate
 * The only thing that matters is that they all are children of "Heart.Pin".
 *
 * If you are building a fully c++ Heart Graph, then I would suggest either using the method below, or alternatively,
 * use FGameplayTagNativeAdder (see FGlobalUITags for an example of this)
 */

// The calculator demo only needs one pin tag, as all pins are identical, and always carry floats.
UE_DEFINE_GAMEPLAY_TAG_STATIC(HeartPinTag_CalcDemo, "Heart.Pin.Demo.Calc")

// The perk tree demo uses Hub and Leaf nodes, and tags its pins accordingly.
UE_DEFINE_GAMEPLAY_TAG_STATIC(HeartPinTag_PerkDemo_HubIn, "Heart.Pin.Demo.Perk.HubIn")
UE_DEFINE_GAMEPLAY_TAG_STATIC(HeartPinTag_PerkDemo_HubOut, "Heart.Pin.Demo.Perk.HubOut")
UE_DEFINE_GAMEPLAY_TAG_STATIC(HeartPinTag_PerkDemo_LeafIn, "Heart.Pin.Demo.Perk.LeafIn")