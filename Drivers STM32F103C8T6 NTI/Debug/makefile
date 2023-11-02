################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include STM32F103C8_Drivers/RCC_Driver/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Drivers STM32F103C8T6 NTI
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Drivers\ STM32F103C8T6\ NTI.elf \

MAP_FILES += \
Drivers\ STM32F103C8T6\ NTI.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Drivers\ STM32F103C8T6\ NTI.list \


# All Target
all: main-build

# Main-build Target
main-build: Drivers\ STM32F103C8T6\ NTI.elf secondary-outputs

# Tool invocations
Drivers\ STM32F103C8T6\ NTI.elf Drivers\ STM32F103C8T6\ NTI.map: $(OBJS) $(USER_OBJS) E:\Workspace\STM32Cube\Drivers\ STM32F103C8T6\ NTI\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Drivers STM32F103C8T6 NTI.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"E:\Workspace\STM32Cube\Drivers STM32F103C8T6 NTI\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Drivers STM32F103C8T6 NTI.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Drivers\ STM32F103C8T6\ NTI.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Drivers STM32F103C8T6 NTI.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Drivers\ STM32F103C8T6\ NTI.elf Drivers\ STM32F103C8T6\ NTI.list Drivers\ STM32F103C8T6\ NTI.map Drivers\\ STM32F103C8T6\\ NTI.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
