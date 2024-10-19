<script setup lang="ts">
import { Switch } from '@/components/ui/switch';
import { Avatar, AvatarImage, AvatarFallback } from '@/components/ui/avatar';
</script>

<template>
    <header>
        <div class="h-full w-full flex flex-row items-center justify-between">
            <img class="h-10 w-auto" src="/logo.svg" alt="Logo" />
            <div class="flex flex-row items-center gap-x-8">
                <Switch class="h-6 w-12"/>
                <Avatar class="h-8 w-auto">
                    <AvatarImage src="https://github.com/radix-vue.png" alt="@radix-vue" />
                    <AvatarFallback>CN</AvatarFallback>
                </Avatar>
            </div>
        </div>
    </header>
</template>