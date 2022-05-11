<template>
    <div class="bg-white">
        <div class="relative overflow-hidden">
            <Popover as="header" class="fixed top-0 left-0 right-0 bg-gray-900 z-50">
                <div class="bg-gray-900 py-4">
                    <nav class="relative max-w-7xl mx-auto flex items-center justify-between px-4 sm:px-6"
                        aria-label="Global">
                        <div class="flex items-center flex-1">
                            <div class="flex items-center justify-between w-full md:w-auto">
                                <a href="#">
                                    <span class="sr-only">EasyView</span>
                                    <img class="h-10 w-auto sm:h-10" src="../assets/new_logo.png" alt="" />
                                </a>
                                <a href="#" class="text-2xl px-4 font-bold text-white hover:text-gray-300">
                                    Easy<span
                                        class="font-medium text-transparent bg-clip-text bg-gradient-to-br from-[#fe4ba1] to-[#4a247c]">View</span>
                                </a>
                                <div class="-mr-2 flex items-center md:hidden">
                                    <PopoverButton
                                        class="bg-gray-900 rounded-md p-2 inline-flex items-center justify-center text-gray-400 hover:bg-gray-800 focus:outline-none focus:ring-2 focus-ring-inset focus:ring-white">
                                        <span class="sr-only">Open main menu</span>
                                        <MenuIcon class="h-6 w-6" aria-hidden="true" />
                                    </PopoverButton>
                                </div>
                            </div>
                            <div class="hidden space-x-8 md:flex md:ml-10">
                                <a v-for="item in navigation" :key="item.name" :href="item.href"
                                    class="text-2xl font-medium text-white hover:text-gray-300">{{ item.name }}
                                </a>
                            </div>
                            <div class="hidden space-x-8 md:flex md:ml-10">
                                <a v-for="item in footerNavigation.social" :key="item.name" :href="item.href"
                                class="text-white hover:text-gray-300">
                                    <span class="sr-only">{{ item.name }}</span>
                                    <component :is="item.icon" class="h-8 w-8" aria-hidden="true" />
                                </a>
                            </div>
                            
                        </div>
                        <div class="hidden md:flex md:items-center md:space-x-6">
                            <a href="https://marketplace.visualstudio.com/items?itemName=xuhpclib-easyview.easyview"
                                class="inline-flex items-center px-4 py-2 border border-transparent text-base font-medium rounded-md text-white bg-gray-600 hover:bg-gray-700">
                                Start free trial </a>
                        </div>
                    </nav>
                </div>

                <transition enter-active-class="duration-150 ease-out" enter-from-class="opacity-0 scale-95"
                    enter-to-class="opacity-100 scale-100" leave-active-class="duration-100 ease-in"
                    leave-from-class="opacity-100 scale-100" leave-to-class="opacity-0 scale-95">
                    <PopoverPanel focus class="absolute top-0 inset-x-0 p-2 transition transform origin-top md:hidden">
                        <div class="rounded-lg shadow-md bg-white ring-1 ring-black ring-opacity-5 overflow-hidden">
                            <div class="px-5 pt-4 flex items-center justify-between">
                                <div>
                                    <img class="h-8 w-auto" src="../assets/new_logo.png" alt="" />
                                </div>
                                <div class="-mr-2">
                                    <PopoverButton
                                        class="bg-white rounded-md p-2 inline-flex items-center justify-center text-gray-400 hover:bg-gray-100 focus:outline-none focus:ring-2 focus:ring-inset focus:ring-cyan-600">
                                        <span class="sr-only">Close menu</span>
                                        <XIcon class="h-6 w-6" aria-hidden="true" />
                                    </PopoverButton>
                                </div>
                            </div>
                            <div class="pt-5 pb-6">
                                <div class="px-2 space-y-1">
                                    <a v-for="item in navigation" :key="item.name" :href="item.href"
                                        class="block px-3 py-2 rounded-md text-xl font-medium text-gray-900 hover:bg-gray-50">{{
                                                item.name
                                        }}</a>
                                    
                                </div>
                                <div class="px-2 flex items-center justify-around">
                                    <a v-for="item in footerNavigation.social" :key="item.name" :href="item.href"
                                        class="text-gray-900 hover:bg-gray-50">
                                        <span class="sr-only">{{ item.name }}</span>
                                        <component :is="item.icon" class="h-8 w-8" aria-hidden="true" />
                                    </a>
                                </div>
                                <div class="mt-6 px-5">
                                    <a href="https://marketplace.visualstudio.com/items?itemName=xuhpclib-easyview.easyview"
                                        class="block text-center w-full py-3 px-4 rounded-md shadow bg-gradient-to-r from-[#fe4ba1] to-[#4a247c] text-white font-medium hover:from-teal-600 hover:to-cyan-700">Start
                                        free trial</a>
                                </div>
                            </div>
                        </div>
                    </PopoverPanel>
                </transition>
            </Popover>
            <main>
                <div class="pt-16 bg-gray-900 sm:pt-16 lg:pt-8 lg:pb-14 lg:overflow-hidden">
                    <div class="mx-auto max-w-7xl lg:px-8">
                        <div class="lg:grid lg:grid-cols-2 lg:gap-8">
                            <div
                                class="mx-auto max-w-md px-4 sm:max-w-2xl sm:px-6 sm:text-center lg:px-0 lg:text-left lg:flex lg:items-center">
                                <div class="lg:py-24">
                                    <h1
                                        class="mt-4 text-4xl tracking-tight font-extrabold text-white sm:mt-5 sm:text-5xl lg:mt-6 xl:text-5xl">
                                        <span class="block"> {{ intro.h1 }} </span>
                                        <span
                                            class="pb-3 block bg-clip-text text-transparent bg-gradient-to-r from-[#fe4ba1] to-[#4a247c] sm:pb-5">
                                            {{ intro.h2 }}</span>
                                    </h1>
                                    <p class="text-base text-gray-300 sm:text-xl lg:text-lg xl:text-xl">
                                        {{ intro.p1 }}
                                        <br />
                                        {{ intro.p2 }}
                                    </p>
                                    <div class="mt-10 sm:mt-12">
                                        <form action="#" class="sm:max-w-xl sm:mx-auto lg:mx-0">
                                            <div class="sm:flex">
                                                <div class="mt-3 sm:mt-0">
                                                    <a href="https://marketplace.visualstudio.com/items?itemName=xuhpclib-easyview.easyview"
                                                        class="block text-center w-full py-3 px-4 rounded-md shadow bg-gradient-to-r from-[#fe4ba1] to-[#4a247c] text-white font-medium hover:from-teal-600 hover:to-cyan-700">Start
                                                        free trial</a>
                                                </div>
                                            </div>
                                        </form>
                                    </div>
                                </div>
                            </div>
                            <div class="mt-12 m-0 lg:relative">
                                <div class="mx-auto max-w-md px-4 sm:max-w-2xl sm:px-6 lg:max-w-none lg:px-0 lg:py-24">
                                    <div class="aspect-w-16 aspect-h-9">
                                        <iframe src="https://www.youtube.com/embed/NKS3pIe3-qQ" frameborder="0"
                                            allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
                                            allowfullscreen></iframe>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <!-- Feature section with screenshot -->
                <div id="Demo" class="relative bg-gray-50 py-20">
                    <div class="mx-auto max-w-md px-4 text-center sm:px-6 sm:max-w-3xl lg:px-8 lg:max-w-7xl">
                        <div>
                            <h2 class="font-sans text-3xl font-bold tracking-wider text-[#4a247c] uppercase">
                                Demonstration</h2>
                        </div>
                        <div class="mt-8 mb-2">
                            <img class="rounded-lg shadow-xl ring-1 ring-black ring-opacity-5" src="../assets/demo2.gif"
                                alt="" />
                        </div>
                    </div>
                </div>

                <!-- Feature section with grid -->
                <div id="Features" class="relative bg-white py-20">
                    <div class="mx-auto max-w-md px-4 text-center sm:max-w-3xl sm:px-6 lg:px-8 lg:max-w-7xl">
                        <h2 class="font-sans text-3xl font-bold tracking-wider text-[#4a247c] uppercase">Features</h2>
                        <div class="mt-8">
                            <div class="grid grid-cols-1 gap-8 sm:grid-cols-2 lg:grid-cols-3">
                                <div v-for="feature in features" :key="feature.name" class="pt-6">
                                    <div class="flow-root bg-gray-50 rounded-lg px-6 pb-8">
                                        <div class="-mt-6">
                                            <div>
                                                <span
                                                    class="inline-flex items-center justify-center p-3 bg-gradient-to-r from-[#fe4ba1] to-[#4a247c] rounded-md shadow-lg">
                                                    <component :is="feature.icon" class="h-6 w-6 text-white"
                                                        aria-hidden="true" />
                                                </span>
                                            </div>
                                            <h3 class="mt-8 text-lg font-medium text-gray-900 tracking-tight">{{
                                                    feature.name
                                            }}</h3>
                                            <p class="mt-5 text-base text-gray-500">
                                                {{ feature.description }}
                                            </p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>

                <!-- Blog section -->
                <div id="Blog" class="relative bg-gray-50 py-20">
                    <div class="relative">
                        <div class="text-center mx-auto max-w-md px-4 sm:max-w-3xl sm:px-6 lg:px-8 lg:max-w-7xl">
                            <h2 class="font-sans text-3xl font-bold tracking-wider text-[#4a247c] uppercase">Blog</h2>
                        </div>
                        <div
                            class="mt-8 mx-auto max-w-md px-4 grid gap-8 sm:max-w-lg sm:px-6 lg:px-8 lg:grid-cols-3 lg:max-w-7xl">
                            <div v-for="post in blogPosts" :key="post.id"
                                class="flex flex-col rounded-lg shadow-lg overflow-hidden">
                                <div class="flex-shrink-0">
                                    <img class="h-48 w-full object-cover" :src="post.imageUrl" alt="" />
                                </div>
                                <div class="flex-1 bg-white p-6 flex flex-col justify-between">
                                    <div class="flex-1">
                                        <p class="text-sm font-medium text-cyan-600">
                                            <a :href="post.category.href" class="hover:underline">
                                                {{ post.category.name }}
                                            </a>
                                        </p>
                                        <a :href="post.href" class="block mt-2">
                                            <p class="text-xl font-semibold text-gray-900">
                                                {{ post.title }}
                                            </p>
                                            <p class="mt-3 text-base text-gray-500">
                                                {{ post.preview }}
                                            </p>
                                        </a>
                                    </div>
                                    <div class="mt-6 flex items-center">
                                        <div class="flex-shrink-0">
                                            <a :href="post.author.href">
                                                <img class="h-10 w-10 rounded-full" :src="post.author.imageUrl"
                                                    :alt="post.author.name" />
                                            </a>
                                        </div>
                                        <div class="ml-3">
                                            <p class="text-sm font-medium text-gray-900">
                                                <a :href="post.author.href" class="hover:underline">
                                                    {{ post.author.name }}
                                                </a>
                                            </p>
                                            <div class="flex space-x-1 text-sm text-gray-500">
                                                <time :datetime="post.datetime">
                                                    {{ post.date }}
                                                </time>
                                                <span aria-hidden="true"> &middot; </span>
                                                <span> {{ post.readingLength }} read </span>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </main>
            <footer class="bg-gray-50" aria-labelledby="footer-heading">
                <h2 id="footer-heading" class="sr-only">Footer</h2>
                <div class="max-w-7xl mx-auto pt-2 pb-8 px-4 sm:px-6 lg:px-8">
                    <div
                        class="mt-6 border-t border-gray-200 pt-2 md:flex md:items-center md:justify-between lg:mt-12">
                        <div class="flex space-x-6 md:order-2">
                            <MailIcon class="flex-shrink-0 w-6 h-6 text-gray-400" aria-hidden="true" />
                            <span class="ml-3 text-gray-400">xuhpclab@gmail.com</span>
                        </div>
                        <p class="mt-8 text-base text-gray-400 md:mt-0 md:order-1">&copy; 2022 XperfLab, Inc. All rights
                            reserved.</p>
                    </div>
                </div>
            </footer>
        </div>
    </div>
</template>

<script setup>
import { defineComponent, h } from 'vue'
import { Popover, PopoverButton, PopoverPanel } from '@headlessui/vue'
import {
    GlobeAltIcon,
    AdjustmentsIcon,
    ShieldCheckIcon,
    AcademicCapIcon,
    ClipboardCheckIcon,
    ChipIcon,
    MenuIcon,
    XIcon,
    MailIcon
} from '@heroicons/vue/outline'
import { ChevronRightIcon, ExternalLinkIcon } from '@heroicons/vue/solid'

const navigation = [
    { name: 'Demo', href: '#Demo' },
    { name: 'Features', href: '#Features' },
    { name: 'Blog', href: '#Blog' }
]

const intro = {
    h1: 'Analyzer and Visualizer',
    h2: 'for Performance Tools',
    p1: 'Support widely used pprof format and more.',
    p2: 'Available as a vscode extension.',
}

const features = [
    {
        name: 'Easy',
        description: 'EasyView is easy to install, use, and customize. It can meets the needs of performance engineers of different levels',
        icon: AcademicCapIcon,
    },
    {
        name: 'General',
        description: 'EasyView is not designed for supporting specific profilers. Instead, it aims to provide a general solution that widely supports a broad range of profilers. EasyView designs general data representation, supports general analysis, and presents profiles in general views.',
        icon: GlobeAltIcon,
    },
    {
        name: 'Portable',
        description: 'EasyView is implemented with web front techniques, which is portable on different platforms such as Linux, Windows, and macOS. EasyView can be easily integrated into IDEs or code editors as an plugin/extension. Currently EasyView is available in vscode extension market for free download.',
        icon: AdjustmentsIcon,
    },
    {
        name: 'Private',
        description: 'EasyView analyzes and visualizes performance data locally without uploading data to a remote server, which minimizes the security and privacy concerns.',
        icon: ShieldCheckIcon,
    },
    {
        name: 'Efficient',
        description: 'EasyView is super efficient. It handles profilers of Gigabytes. Its analysis and visualization are significantly faster than existing solutions. For example, it shows a \~50x speedup over PProf.',
        icon: ClipboardCheckIcon,
    },
    {
        name: 'Intelligent',
        description: 'EasyView can easility integrate various data mining and machine learning models to analyze profiles and correlate the analysis results with source code.',
        icon: ChipIcon,
    }      
]
const blogPosts = [
    {
        id: 1,
        title: 'EasyView: an integrated pprof visualizer for Golang in vscode',
        href: 'https://www.reddit.com/r/golang/comments/t4b4z4/easyview_an_integrated_pprof_visualizer_for/',
        date: 'Mar 01, 2022',
        datetime: '2022-03-01',
        category: { name: 'Reddit Post', href: 'https://www.reddit.com/r/golang/comments/t4b4z4/easyview_an_integrated_pprof_visualizer_for/' },
        imageUrl:
            'https://img.youtube.com/vi/NKS3pIe3-qQ/0.jpg',
        preview:
            'We are researchers at NC State University. We have developed a vscode extension named EasyView, which visualizes PProf output in vscode. Compared to the default web-based visualizer of PProf, EasyView enjoys the following three advantages.',
        author: {
            name: 'Xu Liu',
            imageUrl:
                'https://www.xperflab.org/drcctprof/media/img/XuLiu.png',
            href: 'https://xl10.github.io/',
        },
        readingLength: '1 min',
    },
    {
        id: 2,
        title: 'Analyzing HPC Applications with EasyView -- Laghos',
        href: 'https://www.youtube.com/watch?v=6kt5cbosty8',
        date: 'Mar 7, 2022',
        datetime: '2022-03-7',
        category: { name: 'Video', href: 'https://www.youtube.com/watch?v=6kt5cbosty8' },
        imageUrl:
            'https://img.youtube.com/vi/6kt5cbosty8/0.jpg',
        preview:
            'Laghos: High-order Lagrangian Hydrodynamics Miniapp',
        author: {
            name: 'Xu Liu',
            imageUrl:
                'https://www.xperflab.org/drcctprof/media/img/XuLiu.png',
            href: 'https://xl10.github.io/',
        },
        readingLength: '8 min',
    },
    {
        id: 3,
        title: 'Analyzing HPC Applications with EasyView -- Lulesh',
        href: 'https://www.youtube.com/watch?v=Luc2KJXP6-0',
        date: 'Mar 7, 2022',
        datetime: '2022-03-7',
        category: { name: 'Video', href: 'https://www.youtube.com/watch?v=Luc2KJXP6-0' },
        imageUrl:
            'https://img.youtube.com/vi/Luc2KJXP6-0/0.jpg',
        preview:
            'Lulesh: Livermore Unstructured Lagrangian Explicit Shock Hydrodynamics',
        author: {
            name: 'Xu Liu',
            imageUrl:
                'https://www.xperflab.org/drcctprof/media/img/XuLiu.png',
            href: 'https://xl10.github.io/',
        },
        readingLength: '4 min',
    },
]
const footerNavigation = {
    social: [
        {
            name: 'Twitter',
            href: 'https://twitter.com/EasyView_',
            icon: defineComponent({
                render: () =>
                    h('svg', { fill: 'currentColor', viewBox: '0 0 24 24' }, [
                        h('path', {
                            d: 'M8.29 20.251c7.547 0 11.675-6.253 11.675-11.675 0-.178 0-.355-.012-.53A8.348 8.348 0 0022 5.92a8.19 8.19 0 01-2.357.646 4.118 4.118 0 001.804-2.27 8.224 8.224 0 01-2.605.996 4.107 4.107 0 00-6.993 3.743 11.65 11.65 0 01-8.457-4.287 4.106 4.106 0 001.27 5.477A4.072 4.072 0 012.8 9.713v.052a4.105 4.105 0 003.292 4.022 4.095 4.095 0 01-1.853.07 4.108 4.108 0 003.834 2.85A8.233 8.233 0 012 18.407a11.616 11.616 0 006.29 1.84',
                        }),
                    ]),
            }),
        },
        {
            name: 'GitHub',
            href: 'https://github.com/xperflab/easyview',
            icon: defineComponent({
                render: () =>
                    h('svg', { fill: 'currentColor', viewBox: '0 0 24 24' }, [
                        h('path', {
                            'fill-rule': 'evenodd',
                            d: 'M12 2C6.477 2 2 6.484 2 12.017c0 4.425 2.865 8.18 6.839 9.504.5.092.682-.217.682-.483 0-.237-.008-.868-.013-1.703-2.782.605-3.369-1.343-3.369-1.343-.454-1.158-1.11-1.466-1.11-1.466-.908-.62.069-.608.069-.608 1.003.07 1.531 1.032 1.531 1.032.892 1.53 2.341 1.088 2.91.832.092-.647.35-1.088.636-1.338-2.22-.253-4.555-1.113-4.555-4.951 0-1.093.39-1.988 1.029-2.688-.103-.253-.446-1.272.098-2.65 0 0 .84-.27 2.75 1.026A9.564 9.564 0 0112 6.844c.85.004 1.705.115 2.504.337 1.909-1.296 2.747-1.027 2.747-1.027.546 1.379.202 2.398.1 2.651.64.7 1.028 1.595 1.028 2.688 0 3.848-2.339 4.695-4.566 4.943.359.309.678.92.678 1.855 0 1.338-.012 2.419-.012 2.747 0 .268.18.58.688.482A10.019 10.019 0 0022 12.017C22 6.484 17.522 2 12 2z',
                            'clip-rule': 'evenodd',
                        }),
                    ]),
            }),
        }
    ],
}
</script>
