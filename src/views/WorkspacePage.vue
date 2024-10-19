<script setup lang="ts">
import CodeEditor from '@/components/CodeEditor.vue';
import Console from '@/components/Console.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
import { ScrollArea } from '@/components/ui/scroll-area';
import WorkspaceLayout from '@/layouts/WorkspaceLayout.vue';
import { CodeBracketIcon, CommandLineIcon, DocumentTextIcon } from '@heroicons/vue/24/outline';
</script>

<template>
    <WorkspaceLayout>
        <template #problem>
            <div class="h-full w-full flex flex-col">
                <div class="h-9 w-full flex flex-row items-center justify-start rounded-t-lg pl-4 gap-x-2 bg-slate-300">
                    <DocumentTextIcon class="h-6 w-auto text-cyan-500" />
                    <span>题目描述</span>
                </div>
                <ScrollArea class="max-h-[calc(100%-2.25rem)]">
                    <MarkdownPreview />
                </ScrollArea>
            </div>
        </template>
        <template #editor>
            <div class="h-full w-full flex flex-col">
                <div class="h-9 w-full flex flex-row items-center justify-start rounded-t-lg pl-4 gap-x-2 bg-slate-300">
                    <CodeBracketIcon class="h-6 w-auto text-cyan-500" />
                    <span>代码</span>
                </div>
                <CodeEditor class="max-h-[calc(100%-2.25rem)] pt-2" />
            </div>
        </template>
        <template #console>
            <div class="h-full w-full flex flex-col">
                <div class="h-9 w-full flex flex-row items-center justify-start rounded-t-lg pl-4 gap-x-2 bg-slate-300">
                    <CommandLineIcon class="h-6 w-auto text-cyan-500" />
                    <span>测试用例</span>
                </div>
                <ScrollArea class="max-h-[calc(100%-2.25rem)]">
                    <Console />
                </ScrollArea>
            </div>
        </template>
    </WorkspaceLayout>
</template>