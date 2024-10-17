<template>
    <div class="h-full w-full">
        <vue-monaco-diff-editor theme="vs" :original="original" :modified="modified" language="c"
            :options="OPTIONS" @mount="handleMount" />
    </div>
</template>

<script setup lang="ts">
import { shallowRef, onMounted } from 'vue';
import { useCodeLoader } from '@/lib/loader';
import { loader, VueMonacoDiffEditor } from '@guolao/vue-monaco-editor';

loader.config({
    paths: {
        vs: 'https://cdn.jsdelivr.net/npm/monaco-editor@0.43.0/min/vs',
    },
})

const OPTIONS = {
    automaticLayout: true,
    formatOnType: true,
    formatOnPaste: true,
    readonly: true,
}

const { code: original, loadCode: loadOriginalCode } = useCodeLoader('/original.c');
const { code: modified, loadCode: loadModifiedCode } = useCodeLoader('/modified.c');

const diffEditor = shallowRef();
const handleMount = (diffEditorInstance: any) => (diffEditor.value = diffEditorInstance);

onMounted(() => {
    loadOriginalCode();
    loadModifiedCode();
});
</script>

<script lang="ts">
export default {
    components: { VueMonacoDiffEditor },
}
</script>