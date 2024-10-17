<script setup lang="ts">
import TestCase from '@/components/TestCase.vue';
import TestResult from '@/components/TestResult.vue';
import { Tabs, TabsList, TabsTrigger, TabsContent } from '@/components/ui/tabs';
</script>

<template>
    <div class="h-full w-full">
        <Tabs default-value="testCase" class="w-[400px]">
            <TabsList>
                <TabsTrigger value="testCase">
                    测试用例
                </TabsTrigger>
                <TabsTrigger value="testResult">
                    测试结果
                </TabsTrigger>
            </TabsList>
            <TabsContent value="testCase">
                <div class="h-full w-full">
                    <TestCase />
                </div>
                <!-- Case 1 -->
            </TabsContent>
            <TabsContent value="testResult">
                <TestResult />
                <!-- Case 2 -->
            </TabsContent>
        </Tabs>
    </div>
</template>