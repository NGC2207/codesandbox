<script setup lang="ts">
import Header from '@/components/Header.vue';
import { ResizableHandle, ResizablePanel, ResizablePanelGroup } from '@/components/ui/resizable';
import BaseLayout from '@/layouts/BaseLayout.vue';
</script>

<template>
    <BaseLayout>
        <template #header>
            <Header class="h-12 w-full shrink-0 px-4 sm:px-6 lg:px-8" />
        </template>
        <template #main>
            <div class="flex-grow">
                <ResizablePanelGroup direction="horizontal">
                    <ResizablePanel :default-size="20" class="hidden lg:block">
                        <div class="relative h-full w-full">
                            <div class="absolute top-0 bottom-2 left-2 right-0.5 rounded-lg shadow-lg">
                                <slot name="problem"></slot>
                            </div>
                        </div>
                    </ResizablePanel>
                    <ResizableHandle class="hidden lg:block bg-transparent hover:bg-cyan-500" />
                    <ResizablePanel :default-size="60">
                        <div class="relative h-full w-full">
                            <div class="absolute top-0 bottom-2 left-0.5 right-0.5 rounded-lg shadow-lg">
                                <slot name="editor"></slot>
                            </div>
                        </div>
                    </ResizablePanel>
                    <ResizableHandle class="hidden xl:block bg-transparent hover:bg-cyan-500" />
                    <ResizablePanel :default-size="20" class="hidden xl:block">
                        <div class="relative h-full w-full">
                            <div class="absolute top-0 bottom-2 left-0.5 right-2 rounded-lg shadow-lg">
                                <slot name="console"></slot>
                            </div>
                        </div>
                    </ResizablePanel>
                </ResizablePanelGroup>
            </div>
        </template>
    </BaseLayout>
</template>