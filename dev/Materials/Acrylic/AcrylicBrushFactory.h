﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "AcrylicBrush.h"

class AcrylicBrushFactory
    : public winrt::factory_implementation::AcrylicBrushT<AcrylicBrushFactory, AcrylicBrush, winrt::IAcrylicBrushStaticsPrivate>
{
public:
    AcrylicBrushFactory();

    winrt::CompositionEffectBrush CreateBackdropAcrylicEffectBrush(
        winrt::Compositor const& compositor,
        winrt::Color const& initialTintColor,
        winrt::Color const& initialFallbackColor,
        bool willTintColorAlwaysBeOpaque);

    winrt::CompositionEffectBrush CreateBackdropAcrylicEffectBrushWithLuminosity(
        winrt::Compositor const& compositor,
        winrt::Color const& initialTintColor,
        winrt::Color const& initialLuminosityColor,
        winrt::Color const& initialFallbackColor,
        bool willTintColorAlwaysBeOpaque);
};

CppWinRTActivatableClass(AcrylicBrush)