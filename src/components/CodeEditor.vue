<template>
    <div class="h-full w-full">
        <vue-monaco-editor v-model:value="code" theme="vs" language="c" :options="CODE_EDITOR_OPTIONS"
            @mount="handleMount" />
    </div>
</template>

<script setup lang="ts">
import { shallowRef, onMounted } from 'vue';
import { useCodeLoader } from '@/lib/loader';
import { CODE_EDITOR_OPTIONS } from '@/config/editor';
import { loader, VueMonacoEditor } from '@guolao/vue-monaco-editor';

loader.config({
    paths: {
        vs: 'https://cdn.jsdelivr.net/npm/monaco-editor@0.43.0/min/vs',
    },
})

const { code, loadCode } = useCodeLoader('/original.c');
const editor = shallowRef();
const handleMount = (editorInstance: any) => (editor.value = editorInstance);

function formatCode() {
    editor.value?.getAction('editor.action.formatDocument').run();
}

onMounted(() => {
    loadCode();
});
</script>

<script lang="ts">
export default {
    components: { VueMonacoEditor },
}
</script>